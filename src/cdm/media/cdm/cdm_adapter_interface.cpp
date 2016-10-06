#include "cdm_adapter_interface.h"
#include "cdm_adapter.h"
#include <stdint.h>
extern "C" 
{

	wvadapter * wvadapter_init()
	{
		media::CdmAdapter *adapter = new media::CdmAdapter("com.widevine.alpha", "/usr/lib/libwindevinecdm.so", "", media::CdmConfig(false, true),*(dynamic_cast<media::CdmAdapterClient*>(this)));
		return (wvadapter *)adapter;
	}
	
	void wvadapter_CreateSessionAndGenerateRequest(const wvadapter *adapter, const uint8_t* init_data,
		uint32_t init_data_size)
	{
		media::CdmAdapter *adapter = (wvadapter *)adapter;
		adapter->CreateSessionAndGenerateRequest(0, cdm::SessionType::kTemporary, cdm::InitDataType::kCenc, init_data, init_data_size);
	}
	
	bool wvadapter_valid(const wvadapter *adapter)
	{
		media::CdmAdapter *adapter = (wvadapter *)adapter;
		return adapter->valid();
	}

	

}
