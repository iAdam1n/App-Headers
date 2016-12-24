/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __asl_object_s* asl_object_sRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGImage* CGImageRef;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct _long {
	char* __data_;
	unsigned long long __size_;
	unsigned long long __cap_;
} long;

typedef struct {
	unsigned char __size_;
} SCD_Struct_EC9;

typedef struct _raw {
	unsigned long long __words[3];
} raw;

typedef struct _short {
	char __data_[23];
	SCD_Struct_EC9 ;
} short;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > {
	const ep __first_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >;

typedef struct _compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > __first_;
} compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > >;

typedef struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > __begin_;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > __end_;
	compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > __end_cap_;
} vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >;

typedef struct EcsClientConfig {
	unsigned version;
	int max_retry_attempts;
	unsigned max_server_retry_attempts;
	int first_delay;
	int next_delay_factor;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > servers;
	unsigned long long default_reload_interval;
	unsigned default_reload_interval_limit;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > ui_version;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > skype_token;
	BOOL disable_experiments;
	unsigned token_update_delay_ms;
	IEcsTelemetryLogger ecs_telemetry_logger;
	BOOL startSuspended;
} EcsClientConfig;

typedef struct EcsClientDependencies {
	unsigned version;
	IHttpStack httpstack;
} EcsClientDependencies;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_SK20;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct __CFFileDescriptor* CFFileDescriptorRef;

typedef struct _NSZone* NSZoneRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct CGPath* CGPathRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
} SCD_Struct_SK26;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	SCD_Struct_SK26 field9;
	SCD_Struct_SK26 field10;
	SCD_Struct_SK26 field11;
} SCD_Struct_SK27;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct __CVOpenGLESTextureCache* CVOpenGLESTextureCacheRef;

typedef struct SKPGLProcessorProgram {
	unsigned program;
	int uniforms[16];
} SKPGLProcessorProgram;

typedef struct SKPGLProcessorEffect {
	char* name;
	SKPGLProcessorProgram program1;
	SKPGLProcessorProgram program2;
} SKPGLProcessorEffect;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	double position;
	double height;
	CGRect referenceFrame;
} SCD_Struct_SK34;

typedef struct {
	double field1;
	double field2;
	CGRect field3;
} SCD_Struct_SK35;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct Roi {
	unsigned xOffset;
	unsigned yOffset;
	unsigned width;
	unsigned height;
} Roi;

typedef struct VideoRendererFeedback {
	unsigned srcWidth;
	unsigned srcHeight;
	byref oi srcRoi;
	unsigned renderedWidthPx;
	unsigned renderedHeightPx;
	unsigned screenWidthPx;
	unsigned screenHeightPx;
	unsigned maxFps;
	unsigned screenWidthPh;
	unsigned screenHeightPh;
} VideoRendererFeedback;

typedef struct SKPMultiPushQueue* SKPMultiPushQueueRef;

typedef struct {
	long long connectionStatus;
	long long connectionError;
	long long syncStatus;
	long long sendStatus;
} SCD_Struct_SK40;

typedef struct MKSwipeAnimationData {
	double from;
	double to;
	double duration;
	double start;
} MKSwipeAnimationData;

typedef struct CGContext* CGContextRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_MA43;

typedef union GLKVector3 {
	SCD_Struct_MA43 field1;
	SCD_Struct_MA43 field2;
	SCD_Struct_MA43 field3;
	float v[3];
} GLKVector3;

typedef struct {
	GLKVector3 v;
	float s;
} SCD_Struct_MA45;

typedef struct {
	float x;
	float y;
	float z;
	float w;
} SCD_Struct_MA46;

typedef union GLKQuaternion {
	SCD_Struct_MA45 field1;
	SCD_Struct_MA46 field2;
	float q[4];
} GLKQuaternion;

typedef struct CaptureParameters {
	unsigned fields;
	unsigned fourcc;
	unsigned width;
	unsigned height;
	unsigned framerate;
} CaptureParameters;

typedef struct CaptureStats {
	unsigned fields;
	unsigned dataTimeStamp;
	unsigned dataValidityInterval;
	unsigned captureFrameWidth;
	unsigned captureFrameHeight;
	unsigned captureColorSpace;
	unsigned requestedFrameRate;
	BOOL hardwareEncoding;
	BOOL autoZoom;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > histResolutionAndroid;
	int srMinRate;
	int srMaxRate;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > histOfSrRate;
} CaptureStats;

typedef struct GLPROGRAM {
	unsigned program;
	int uniforms[14];
} GLPROGRAM;

typedef struct GLEFFECT {
	char* name;
	GLPROGRAM program1;
	GLPROGRAM program2;
} GLEFFECT;

typedef struct SensorData {
	double timestampCamera;
	float rotx;
	float roty;
	float rotxNoExp;
	float rotyNoExp;
	float mvx;
	float mvy;
	float mvxNoExp;
	float mvyNoExp;
	float shutterSpeedValue;
} SensorData;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct RefCountPtr<AsyncMedia::cm::ICallbackObject> {
	ICallbackObject m_ptr;
} RefCountPtr<AsyncMedia::cm::ICallbackObject>;

typedef struct RefCountPtr<AsyncMedia::cm::IRequest> {
	IRequest m_ptr;
} RefCountPtr<AsyncMedia::cm::IRequest>;

typedef struct RefCountPtr<AsyncMedia::cm::TransportResponse> {
	TransportResponse m_ptr;
} RefCountPtr<AsyncMedia::cm::TransportResponse>;

typedef struct _compressed_pair<auf_v18::WeakIntrusivePtr<dl::video::IDeviceManagerCallback> *, std::__1::allocator<auf_v18::WeakIntrusivePtr<dl::video::IDeviceManagerCallback> > > {
	WeakIntrusivePtr<dl::video::IDeviceManagerCallback> __first_;
} compressed_pair<auf_v18::WeakIntrusivePtr<dl::video::IDeviceManagerCallback> *, std::__1::allocator<auf_v18::WeakIntrusivePtr<dl::video::IDeviceManagerCallback> > >;

typedef struct vector<auf_v18::WeakIntrusivePtr<dl::video::IDeviceManagerCallback>, std::__1::allocator<auf_v18::WeakIntrusivePtr<dl::video::IDeviceManagerCallback> > > {
	WeakIntrusivePtr<dl::video::IDeviceManagerCallback> __begin_;
	WeakIntrusivePtr<dl::video::IDeviceManagerCallback> __end_;
	compressed_pair<auf_v18::WeakIntrusivePtr<dl::video::IDeviceManagerCallback> *, std::__1::allocator<auf_v18::WeakIntrusivePtr<dl::video::IDeviceManagerCallback> > > __end_cap_;
} vector<auf_v18::WeakIntrusivePtr<dl::video::IDeviceManagerCallback>, std::__1::allocator<auf_v18::WeakIntrusivePtr<dl::video::IDeviceManagerCallback> > >;

typedef struct CheckedMutex {
	MutexCoreImp m_imp;
	long long m_reserved1;
} CheckedMutex;

typedef struct CallbackList<dl::video::IDeviceManagerCallback> {
	CheckedMutex m_callbacksLock;
	vector<auf_v18::WeakIntrusivePtr<dl::video::IDeviceManagerCallback>, std::__1::allocator<auf_v18::WeakIntrusivePtr<dl::video::IDeviceManagerCallback> > > m_callbacks;
} CallbackList<dl::video::IDeviceManagerCallback>;

typedef struct WeakIntrusivePtr<dl::video::apple::VideoCapturerApple> {
	void m_aux;
	VideoCapturerApple m_ptr;
} WeakIntrusivePtr<dl::video::apple::VideoCapturerApple>;

typedef struct {
	void field1;
	char* field2;
	char* field3;
	unsigned field4;
	unsigned long long field5;
} SCD_Struct_BI63;

typedef struct _darwin_sigaltstack {
	void ss_sp;
	unsigned long long ss_size;
	int ss_flags;
} darwin_sigaltstack;

typedef struct __CFUUID* CFUUIDRef;

typedef struct timeval {
	long long tv_sec;
	int tv_usec;
} timeval;

typedef struct PLCrashHostInfoVersion {
	unsigned long long major;
	unsigned long long minor;
	unsigned long long revision;
} PLCrashHostInfoVersion;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_BI68;

typedef struct plcrash_mach_exception_port_set {
	unsigned count;
	unsigned masks[14];
	unsigned ports[14];
	int behaviors[14];
	int flavors[14];
} plcrash_mach_exception_port_set;
