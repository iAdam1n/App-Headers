/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:06 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WAPttPlayer, NSData, NSString, GPBMessage, GPBEnumDescriptor, NSOutputStream;

typedef struct _NSZone* NSZoneRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_WA5;

typedef struct {
	SCD_Struct_WA5 start;
	SCD_Struct_WA5 duration;
} SCD_Struct_WA6;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	CGSize origin;
	CGSize size;
} SCD_Struct_WA10;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	unsigned long long field4;
	long long field5;
	double field6;
	double field7;
	double field8;
	long long field9;
} SCD_Struct_WA12;

typedef struct {
	char* body_data;
	long long body_storage;
	long long body_fill;
	long long body_returned;
	int lacing_vals;
	long long granule_vals;
	long long lacing_storage;
	long long lacing_fill;
	long long lacing_packet;
	long long lacing_returned;
	unsigned char header[282];
	int header_fill;
	int e_o_s;
	int b_o_s;
	long long serialno;
	long long pageno;
	long long packetno;
	long long granulepos;
} SCD_Struct_WA13;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct opusEncodingInfo {
	__sFILE file;
	long long currentPosition;
	long long recordTime;
	OpusEncoder opusEncoder;
	SCD_Struct_WA13 ogg_stream_state;
	short pcmBuffer[320];
	int pcmBufferCount;
	BOOL processAqBuffers;
	opaque_pthread_mutex_t opusInfoMutex;
} opusEncodingInfo;

typedef struct OpaqueAudioQueue* OpaqueAudioQueueRef;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
} SCD_Struct_WA17;

typedef struct {
	SCD_Struct_WA17 field1;
	long long field2;
	long long field3;
	long long field4;
	unsigned long long field5;
} SCD_Struct_WA18;

typedef struct CGPattern* CGPatternRef;

typedef struct WACallOverlayAnchorsWithOffset {
	long long anchors;
	CGSize offset;
} WACallOverlayAnchorsWithOffset;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct {
	long long version;
	void info;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
} SCD_Struct_XM22;

typedef struct CGImage* CGImageRef;

typedef struct opusInfo {
	OggOpusFile file;
	long long length;
	long long currentPosition;
	BOOL reachedEof;
	unsigned short numAqBuffersDisposed;
	WAPttPlayer* pttPlayer;
} opusInfo;

typedef struct amrNBInfo {
	__sFILE file;
	int length;
	int currentPosition;
	void amrNBDecoder;
	BOOL reachedEof;
	unsigned short numAqBuffersDisposed;
	WAPttPlayer* pttPlayer;
} amrNBInfo;

typedef struct amrWBInfo {
	__sFILE file;
	int length;
	int currentPosition;
	void amrWBDecoder;
	BOOL reachedEof;
	unsigned short numAqBuffersDisposed;
	WAPttPlayer* pttPlayer;
} amrWBInfo;

typedef struct sb_stemmer* sb_stemmerRef;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct __CFWriteStream* CFWriteStreamRef;

typedef struct SSLContext* SSLContextRef;

typedef struct __CFHost* CFHostRef;

typedef struct CC_SHA256state_st {
	unsigned count[2];
	unsigned hash[8];
	unsigned wbuf[16];
} CC_SHA256state_st;

typedef struct __CFString* CFStringRef;

typedef struct {
	double call_side;
	double call_result;
	double call_setup_error_type;
	double call_offer_nack_error_code;
	double call_term_reason;
	double call_transport;
	double call_transport_ip_version;
	double call_network;
	double call_p2p_disabled;
	double call_transition_count;
	double call_relay_bind_status;
	double call_self_ipv4;
	double call_peer_ipv4;
	double call_relay_create_t;
	double call_agc_mode;
	double call_aec_mode;
	double call_ns_mode;
	double call_sw_aec_type;
	double call_sw_aec_mode;
	double call_aec_offset;
	double call_aec_tail_length;
	double call_echo_likelihood;
	double call_echo_likelihood_before_ec;
	double call_echo_energy;
	double call_play_cb_avg_t;
	double call_record_cb_avg_t;
	double call_clock_cb_avg_t;
	double call_playback_cb_stopped;
	double call_record_cb_stopped;
	double call_record_get_frame_avg_t;
	double call_tones_detected_in_ringback;
	double call_tones_detected_in_record;
	double call_tones_offset;
	double call_tones_offset_stddev;
	double call_t;
	double call_setup_t;
	double call_ringing_t;
	double call_offer_receipt_delay;
	double call_relay_to_relay_fallback_count;
	double call_p2p_to_relay_fallback_count;
	double call_min_rtt;
	double call_max_rtt;
	double call_avg_rtt;
	double call_last_rtt;
	double call_initial_rtt;
	double call_tx_pkt_loss_pct;
	double call_tx_pkt_error_pct;
	double call_tx_avg_bitrate;
	double call_tx_avg_bwe;
	double call_tx_min_jitter;
	double call_tx_max_jitter;
	double call_tx_avg_jitter;
	double call_tx_min_loss_period;
	double call_tx_max_loss_period;
	double call_tx_avg_loss_period;
	double call_rx_pkt_loss_pct;
	double call_rx_avg_bitrate;
	double call_rx_avg_bwe;
	double call_rx_min_jitter;
	double call_rx_max_jitter;
	double call_rx_avg_jitter;
	double call_rx_min_loss_period;
	double call_rx_max_loss_period;
	double call_rx_avg_loss_period;
	double call_rx_stopped_t;
	double call_start_time;
	double call_end_time;
	double call_accept_time;
	double call_reject_time;
	double create_sound_port_time;
	double avg_encode_ms;
	double avg_decode_ms;
	double avg_target_bitrate;
	double tx_total_bytes;
	double rx_total_bytes;
	double tx_total_bitrate;
	double rx_total_bitrate;
	double num_encoder_comp_stepdowns;
	char abtest_bucket[32];
	double jb_avg_delay;
	double jb_min_delay;
	double jb_max_delay;
	double jb_last_delay;
	double jb_empties;
	double jb_gets;
	double jb_puts;
	double jb_discards;
	char relay_server_address[54];
	char ip_str[46];
	char peer_ip_str[46];
	double rc_minrtt;
	double rc_maxrtt;
	double call_record_silence_ratio;
	double call_record_max_energy_ratio;
	double call_record_frames_per_second;
	double call_playback_frames_per_second;
	double call_recent_record_frames_per_second;
	double call_recent_playback_frames_per_second;
	double call_audio_restart_count;
	double call_audio_restart_reason;
	double call_ec_restart_count;
	double call_interrupted_count;
	double call_ended_interrupted;
	double call_sampling_rate;
	double audio_buffer_underflow_per_second;
	double audio_buffer_overflow_per_second;
	double audio_buffer_frame_count;
	double low_data_usage_bitrate;
	double pings_sent;
	double pongs_received;
	double reflective_ports_diff;
	double call_end_reconnecting;
	double is_ipv6_capable;
} SCD_Struct_Ca34;

typedef struct {
	unsigned field1;
	unsigned char field2[16];
	unsigned short field3;
	unsigned char field4;
} SCD_Struct_Ca35;

typedef struct {
	int field1;
	int field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	int field8;
	int field9;
	unsigned char field10;
	int field11;
	int field12;
	unsigned char field13;
	int field14;
	int field15;
	int field16;
	unsigned char field17;
	unsigned char field18;
	int field19;
} SCD_Struct_Ca36;

typedef struct {
	int field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned field6;
} SCD_Struct_Ca37;

typedef struct {
	int field1;
	int field2;
	unsigned char field3;
} SCD_Struct_Ca38;

typedef struct {
	unsigned char field1;
} SCD_Struct_Ca39;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned short field5;
	unsigned char field6;
	int field7;
	unsigned short field8;
	int field9;
} SCD_Struct_Ca40;

typedef struct {
	int field1;
	unsigned char field2;
	int field3;
} SCD_Struct_Ca41;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	int field7;
} SCD_Struct_Ca42;

typedef struct {
	int field1;
	int field2;
	int field3;
	int field4;
	unsigned char field5;
	unsigned char field6;
	int field7;
	int field8;
} SCD_Struct_Ca43;

typedef struct {
	float field1;
	unsigned char field2;
	unsigned char field3;
	int field4;
	int field5;
} SCD_Struct_Ca44;

typedef struct {
	int field1;
	int field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	int field6;
	unsigned char field7;
	int field8;
	unsigned field9;
	int field10;
} SCD_Struct_Ca45;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_Ca46;

typedef struct {
	unsigned char field1;
	unsigned field2;
	unsigned field3;
	int field4;
	unsigned field5;
	int field6;
} SCD_Struct_Ca47;

typedef struct {
	int field1;
	int field2;
	int field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
} SCD_Struct_Ca48;

typedef struct {
	unsigned char field1[256];
	int field2;
	unsigned char field3[256];
	int field4;
	unsigned char field5[32];
	int field6;
	unsigned char field7[32];
	int field8;
} SCD_Struct_Ca49;

typedef struct {
	int field1;
	int field2;
	int field3;
	unsigned short field4;
	unsigned short field5;
} SCD_Struct_Ca50;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned char field7;
	unsigned char field8;
	unsigned field9;
	unsigned field10;
	unsigned field11;
	int field12;
	unsigned field13;
	int field14;
	unsigned field15;
	int field16;
	unsigned field17;
	unsigned field18;
	int field19;
	int field20;
	unsigned char field21;
	int field22;
	unsigned field23;
	unsigned field24;
	int field25;
	unsigned field26;
	SCD_Struct_Ca42 field27;
} SCD_Struct_Ca51;

typedef struct {
	SCD_Struct_Ca36 field1;
	SCD_Struct_Ca37 field2;
	SCD_Struct_Ca38 field3;
	SCD_Struct_Ca39 field4;
	SCD_Struct_Ca40 field5;
	SCD_Struct_Ca41 field6;
	int field7;
	SCD_Struct_Ca43 field8;
	SCD_Struct_Ca44 field9;
	SCD_Struct_Ca45 field10;
	SCD_Struct_Ca46 field11;
	SCD_Struct_Ca47 field12;
	SCD_Struct_Ca48 field13;
	SCD_Struct_Ca51 field14;
	unsigned char field15;
	int field16;
	int field17;
	int field18;
	int field19;
	int field20;
	char field21[32];
	unsigned field22;
	int field23;
	int field24;
	int field25;
	unsigned char field26;
	int field27;
	int field28;
	unsigned field29;
	unsigned field30;
	int field31;
	int field32;
	const  field33;
	t field34;
	p field35;
	_ field36;
	m field37;
	u field38;
	long field39;
	t field40;
	int field41;
	p field42;
	long field43;
	e field44;
	_ field45;
	e field46;
	x field47;
	t field48;
	_ field49;
	t field50;
	y field51;
	p field52;
	e field53;
	short field54;
	int field55;
	int( field56;
	p field57;
	j field58;
	_ field59;
	short field60;
	o field61;
	char field62;
	k field63;
	a field64;
	double field65;
	double field66;
	const  field67;
	= field68;
	p field69;
	j field70;
	_ field71;
	a field72;
	double field73;
	double field74;
	const  field75;
	_ field76;
	h field77;
	double field78;
	const  field79;
	p field80;
	j field81;
	_ field82;
	short field83;
	o field84;
	char field85;
	k field86;
	a field87;
	double field88;
	double field89;
	const  field90;
	_ field91;
	int field92;
	n field93;
	p field94;
	j field95;
	_ field96;
	short field97;
	o field98;
	char field99;
	k field100;
	a field101;
	double field102;
	double field103;
	const  field104;
	_ field105;
	int field106;
	n field107;
	6) field108;
	int field109;
} SCD_Struct_Ca52;

typedef struct {
	unsigned char field1;
	wa_call_relay_token field2[8];
} SCD_Struct_Ca53;

typedef struct {
	unsigned char field1;
	wa_call_relay_addr field2[8];
} SCD_Struct_Ca54;

typedef struct {
	unsigned char field1;
	SCD_Struct_Ca35 field2[20];
} SCD_Struct_Ca55;

typedef struct {
	unsigned char field1;
	char field2[64];
	char field3[64];
	unsigned field4;
	SCD_Struct_Ca49 field5;
	SCD_Struct_Ca50 field6;
	SCD_Struct_Ca52 field7;
	SCD_Struct_Ca53 field8;
	unsigned char field9[32];
	int field10;
	SCD_Struct_Ca54 field11;
	unsigned field12;
	SCD_Struct_Ca55 field13;
} SCD_Struct_Ca56;

typedef struct {
	unsigned char field1;
	char field2[64];
	char field3[64];
	unsigned field4;
	SCD_Struct_Ca52 field5;
	SCD_Struct_Ca53 field6;
	SCD_Struct_Ca54 field7;
} SCD_Struct_Ca57;

typedef struct {
	unsigned field1;
	unsigned char field2[16];
	unsigned short field3;
	int field4;
} SCD_Struct_Ca58;

typedef struct {
	unsigned char field1;
	SCD_Struct_Ca58 field2[8];
} SCD_Struct_Ca59;

typedef struct {
	unsigned char field1;
	char field2[64];
	char field3[64];
	unsigned field4;
	unsigned char field5[16];
	unsigned short field6;
	int field7;
} SCD_Struct_Ca60;

typedef struct {
	double maximumWidth;
	double maximumWidthForPortraitOrientation;
	double preferredFixedSizeWidth;
	unsigned long long position;
	long long layoutDirection;
	double layoutMargin;
	double preferredInset;
	double cornerRadius;
	long long maximumNumberOfLines;
} SCD_Struct_WA61;

typedef struct _CCCryptor* CCCryptorRef;

typedef struct {
	unsigned ctx[96];
} SCD_Struct_WA63;

typedef struct {
	CGSize field1;
	CGPoint field2;
	double field3;
} SCD_Struct_WA64;

typedef struct opaqueCMBufferQueue* opaqueCMBufferQueueRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct fingerprint* fingerprintRef;

typedef struct signal_context* signal_contextRef;

typedef struct {
	 position;
	 size;
	 color;
	float angle;
	void context;
} SCD_Struct_WA69;

typedef struct CGContext* CGContextRef;

typedef struct __CTFramesetter* CTFramesetterRef;

typedef struct __CTLine* CTLineRef;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_Te73;

typedef struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

typedef struct {
	SCD_Struct_WA5 duration;
	SCD_Struct_WA5 presentationTimeStamp;
	SCD_Struct_WA5 decodeTimeStamp;
} SCD_Struct_WA75;

typedef struct signal_protocol_store_context* signal_protocol_store_contextRef;

typedef struct signal_buffer* signal_bufferRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_WA78;

typedef struct {
	[3 columns];
} SCD_Struct_WA79;

typedef struct {
	CGSize cropSize;
	CGPoint anchorPoint;
	double rotationAngle;
} SCD_Struct_WA80;

typedef struct __SecTrust* SecTrustRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFSocket* CFSocketRef;

typedef struct {
	unsigned field1;
	sockaddr field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
	/*function pointer*/void* field6;
	/*function pointer*/void* field7;
} SCD_Struct_WA84;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct SpringSolver<POP::Vector4<double> >* SpringSolver<POP::Vector4<double> >Ref;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > >;

typedef struct _list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> {
	__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> __prev_;
	__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> __next_;
} list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *>;

typedef struct list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > > {
	list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > > __size_alloc_;
} list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > >;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct {
	id field1;
	id field2;
	/*function pointer*/void* field3;
	id field4;
	/*function pointer*/void* field5;
	double field6;
} SCD_Struct_PO93;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct GPBCodedInputStreamState {
	char* bytes;
	unsigned long long bufferSize;
	unsigned long long bufferPos;
	unsigned long long currentLimit;
	int lastTag;
	unsigned long long recursionDepth;
} GPBCodedInputStreamState;

typedef union {
	BOOL valueBool;
	int valueInt32;
	long long valueInt64;
	unsigned valueUInt32;
	unsigned long long valueUInt64;
	float valueFloat;
	double valueDouble;
	NSData* valueData;
	NSString* valueString;
	GPBMessage* valueMessage;
	int valueEnum;
} SCD_Union_GP97;

typedef union {
	GPBEnumDescriptor* enumDescriptor_;
	/*function pointer*/void* enumVerifier_;
} SCD_Union_GP98;

typedef struct GPBOutputBufferState {
	char* bytes;
	unsigned long long size;
	unsigned long long position;
	NSOutputStream* output;
} GPBOutputBufferState;

typedef struct {
	tm_zip_s field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
} SCD_Struct_SS100;

typedef struct gl_buffers* gl_buffersRef;

typedef struct OpaqueVTCompressionSession* OpaqueVTCompressionSessionRef;

typedef struct OpaqueVTDecompressionSession* OpaqueVTDecompressionSessionRef;

