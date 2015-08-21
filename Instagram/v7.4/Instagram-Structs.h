/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:21 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

typedef struct {
	_ftsent field1;
	_ftsent field2;
	_ftsent field3;
	int field4;
	char* field5;
	int field6;
	int field7;
	int( field8;
	/*function pointer*/void* field9;
	= field10;
	/*function pointer*/void* field11;
	id field12;
	/*function pointer*/void*) field13;
	int field14;
} SCD_Struct_IG0;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_IG1;

typedef struct {
	unsigned char field1;
	unsigned char field2;
} SCD_Struct_IG2;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	double x;
	double y;
	double z;
} SCD_Struct_IG10;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	float m00;
	float m01;
	float m02;
	float m03;
	float m10;
	float m11;
	float m12;
	float m13;
	float m20;
	float m21;
	float m22;
	float m23;
	float m30;
	float m31;
	float m32;
	float m33;
} SCD_Struct_IG12;

typedef union GLKMatrix4 {
	SCD_Struct_IG12 field1;
	float m[16];
} GLKMatrix4;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_IG15;

typedef struct IGCarouselMetrics {
	double sectionHeaderHeight;
	double padding;
	double headerBottomSpacing;
	CGSize itemSize;
	UIEdgeInsets sectionInset;
	double minimumLineSpacing;
} IGCarouselMetrics;

typedef struct CGContext* CGContextRef;

typedef struct _compressed_pair<long *, std::__1::allocator<long> > {
	long long __first_;
} compressed_pair<long *, std::__1::allocator<long> >;

typedef struct vector<long, std::__1::allocator<long> > {
	long long __begin_;
	long long __end_;
	compressed_pair<long *, std::__1::allocator<long> > __end_cap_;
} vector<long, std::__1::allocator<long> >;

typedef struct _compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > {
	vector<double, std::__1::allocator<double> > __first_;
} compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >;

typedef struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > {
	vector<double, std::__1::allocator<double> > __begin_;
	vector<double, std::__1::allocator<double> > __end_;
	compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > __end_cap_;
} vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >;

typedef struct _compressed_pair<double *, std::__1::allocator<double> > {
	double __first_;
} compressed_pair<double *, std::__1::allocator<double> >;

typedef struct vector<double, std::__1::allocator<double> > {
	double __begin_;
	double __end_;
	compressed_pair<double *, std::__1::allocator<double> > __end_cap_;
} vector<double, std::__1::allocator<double> >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, double>, std::__1::less<unsigned long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, double>, std::__1::less<unsigned long>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, double>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, double>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned long, double>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, double>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, double> > > {
	__tree_node<std::__1::__value_type<unsigned long, double>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, double>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, double>, std::__1::less<unsigned long>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned long, double>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, double>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, double> > >;

typedef struct map<unsigned long, double, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, double> > > {
	tree<std::__1::__value_type<unsigned long, double>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, double>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, double> > > __tree_;
} map<unsigned long, double, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, double> > >;

typedef struct {
	int numRows;
	int numSquaresPerRow;
	int squareDimension;
} SCD_Struct_IG29;

typedef struct {
	CGPoint center;
	CGPoint span;
} SCD_Struct_IG30;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::hash<std::__1::basic_string<char> >, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::hash<std::__1::basic_string<char> >, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::equal_to<std::__1::basic_string<char> >, true> > {
	float __first_;
} compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::equal_to<std::__1::basic_string<char> >, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> {
	__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> __first_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > > {
	__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> __first_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > __second_;
} compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > > {
	compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, double> > > {
	unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::hash<std::__1::basic_string<char> >, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::equal_to<std::__1::basic_string<char> >, true> > __p3_;
} hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, double> > >;

typedef struct unordered_map<std::__1::basic_string<char>, double, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > > {
	hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, double> > > __table_;
} unordered_map<std::__1::basic_string<char>, double, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > >;

typedef struct _compressed_pair<unsigned long, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > > > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > > >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<double, std::__1::basic_string<char> >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<double, std::__1::basic_string<char> >, void *> > >;

typedef struct _tree<std::__1::pair<double, std::__1::basic_string<char> >, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > >, std::__1::allocator<std::__1::pair<double, std::__1::basic_string<char> > > > {
	__tree_node<std::__1::pair<double, std::__1::basic_string<char> >, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<double, std::__1::basic_string<char> >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > > > __pair3_;
} tree<std::__1::pair<double, std::__1::basic_string<char> >, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > >, std::__1::allocator<std::__1::pair<double, std::__1::basic_string<char> > > >;

typedef struct set<std::__1::pair<double, std::__1::basic_string<char> >, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > >, std::__1::allocator<std::__1::pair<double, std::__1::basic_string<char> > > > {
	tree<std::__1::pair<double, std::__1::basic_string<char> >, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > >, std::__1::allocator<std::__1::pair<double, std::__1::basic_string<char> > > > __tree_;
} set<std::__1::pair<double, std::__1::basic_string<char> >, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > >, std::__1::allocator<std::__1::pair<double, std::__1::basic_string<char> > > >;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_IG45;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	SCD_Struct_IG45 start;
	SCD_Struct_IG45 duration;
} SCD_Struct_IG47;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	long long version;
	void info;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
} SCD_Struct_GC49;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct __CFWriteStream* CFWriteStreamRef;

typedef struct SSLContext* SSLContextRef;

typedef struct __CFHTTPMessage* CFHTTPMessageRef;

typedef struct {
	CGSize field1;
	long long field2;
	long long field3;
	BOOL field4;
	BOOL field5;
	BOOL field6;
} SCD_Struct_IG54;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFString* CFStringRef;

typedef struct __CTRunDelegate* CTRunDelegateRef;

typedef struct __CVOpenGLESTextureCache* CVOpenGLESTextureCacheRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_IG61;

typedef union GLKVector3 {
	SCD_Struct_IG61 field1;
	SCD_Struct_IG61 field2;
	SCD_Struct_IG61 field3;
	float v[3];
} GLKVector3;

typedef struct {
	float x;
	float y;
} SCD_Struct_IG63;

typedef union GLKVector2 {
	SCD_Struct_IG63 field1;
	SCD_Struct_IG63 field2;
	float v[2];
} GLKVector2;

typedef struct {
	BOOL field1;
	unsigned char field2;
	BOOL field3;
	unsigned long long field4;
} SCD_Struct_SR65;

typedef struct {
	double fieldOfView;
	double aspectRatio;
	double gyroDelay;
	double shutterSpeed;
	char gyroOrientation[3];
} SCD_Struct_IG66;

typedef struct OpaqueCMClock* OpaqueCMClockRef;

typedef struct circular_buffer<IGGyroSample, std::__1::allocator<IGGyroSample> > {
	IGGyroSample m_buff;
	IGGyroSample m_end;
	IGGyroSample m_first;
	IGGyroSample m_last;
	unsigned long long m_size;
	allocator<IGGyroSample> m_alloc;
} circular_buffer<IGGyroSample, std::__1::allocator<IGGyroSample> >;

typedef struct _compressed_pair<IGGyroSample *, std::__1::allocator<IGGyroSample> > {
	IGGyroSample __first_;
} compressed_pair<IGGyroSample *, std::__1::allocator<IGGyroSample> >;

typedef struct vector<IGGyroSample, std::__1::allocator<IGGyroSample> > {
	IGGyroSample __begin_;
	IGGyroSample __end_;
	compressed_pair<IGGyroSample *, std::__1::allocator<IGGyroSample> > __end_cap_;
} vector<IGGyroSample, std::__1::allocator<IGGyroSample> >;

typedef struct _compressed_pair<IGFrameSample *, std::__1::allocator<IGFrameSample> > {
	IGFrameSample __first_;
} compressed_pair<IGFrameSample *, std::__1::allocator<IGFrameSample> >;

typedef struct vector<IGFrameSample, std::__1::allocator<IGFrameSample> > {
	IGFrameSample __begin_;
	IGFrameSample __end_;
	compressed_pair<IGFrameSample *, std::__1::allocator<IGFrameSample> > __end_cap_;
} vector<IGFrameSample, std::__1::allocator<IGFrameSample> >;

typedef struct _compressed_pair<IGOrientationSample *, std::__1::allocator<IGOrientationSample> > {
	IGOrientationSample __first_;
} compressed_pair<IGOrientationSample *, std::__1::allocator<IGOrientationSample> >;

typedef struct vector<IGOrientationSample, std::__1::allocator<IGOrientationSample> > {
	IGOrientationSample __begin_;
	IGOrientationSample __end_;
	compressed_pair<IGOrientationSample *, std::__1::allocator<IGOrientationSample> > __end_cap_;
} vector<IGOrientationSample, std::__1::allocator<IGOrientationSample> >;

typedef struct _compressed_pair<boost::qvm::quat<double> *, std::__1::allocator<boost::qvm::quat<double> > > {
	quat<double> __first_;
} compressed_pair<boost::qvm::quat<double> *, std::__1::allocator<boost::qvm::quat<double> > >;

typedef struct vector<boost::qvm::quat<double>, std::__1::allocator<boost::qvm::quat<double> > > {
	quat<double> __begin_;
	quat<double> __end_;
	compressed_pair<boost::qvm::quat<double> *, std::__1::allocator<boost::qvm::quat<double> > > __end_cap_;
} vector<boost::qvm::quat<double>, std::__1::allocator<boost::qvm::quat<double> > >;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct __SecRandom* SecRandomRef;

typedef struct FBAnimationPerformanceTrackerConfig {
	long long smallDropEventFrameNumber;
	long long largeDropEventFrameNumber;
	long long maxFrameDropAccount;
	BOOL reportStackTraces;
} FBAnimationPerformanceTrackerConfig;

typedef struct {
	id field1;
	id field2;
	/*function pointer*/void* field3;
	id field4;
	/*function pointer*/void* field5;
	double field6;
} SCD_Struct_PO81;

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

