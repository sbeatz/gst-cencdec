typedef void wvadapter;

#ifdef __cplusplus
extern "C" {
#endif

wvadapter * wvadapter_init();
bool wvadapter_valid(const wvadapter *adapter);
bool wvadapter_SessionValid(const wvadapter *adapter);
bool wvadapter_KeyIdValid(const wvadapter *adapter);
int * wvadapter_GetMessage(const wvadapter *adapter);
int wvadapter_GetMessageSize(const wvadapter *adapter);
int * wvadapter_GetKeyId(const wvadapter *adapter);
int wvadapter_GetKeyIdSize(const wvadapter *adapter);
void wvadapter_CreateSessionAndGenerateRequest(const wvadapter *adapter,const uint8_t* init_data,
		uint32_t init_data_size);
#ifdef __cplusplus
}
#endif
