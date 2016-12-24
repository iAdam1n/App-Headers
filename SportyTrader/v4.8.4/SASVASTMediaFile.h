/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@class NSString, NSURL;

@interface SASVASTMediaFile : NSObject {

	BOOL _scalable;
	BOOL _maintainAspectRatio;
	int _bitrate;
	int _width;
	int _height;
	NSString* _mediaid;
	NSString* _delivery;
	NSString* _type;
	NSString* _apiFramework;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * mediaid;                   //@synthesize mediaid=_mediaid - In the implementation block
@property (nonatomic,copy,readonly) NSString * delivery;                  //@synthesize delivery=_delivery - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int bitrate;                               //@synthesize bitrate=_bitrate - In the implementation block
@property (nonatomic,readonly) int width;                                 //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int height;                                //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) BOOL scalable;                             //@synthesize scalable=_scalable - In the implementation block
@property (nonatomic,readonly) BOOL maintainAspectRatio;                  //@synthesize maintainAspectRatio=_maintainAspectRatio - In the implementation block
@property (nonatomic,copy,readonly) NSString * apiFramework;              //@synthesize apiFramework=_apiFramework - In the implementation block
@property (nonatomic,readonly) NSURL * url;                               //@synthesize url=_url - In the implementation block
-(NSString *)apiFramework;
-(BOOL)maintainAspectRatio;
-(BOOL)scalable;
-(id)initWithMediaId:(id)arg1 delivery:(id)arg2 type:(id)arg3 bitrate:(id)arg4 width:(id)arg5 height:(id)arg6 scalable:(id)arg7 maintainAspectRatio:(id)arg8 apiFramework:(id)arg9 url:(id)arg10 ;
-(BOOL)hasAspectRatio;
-(NSString *)mediaid;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)type;
-(int)width;
-(int)height;
-(NSString *)delivery;
-(CGSize)aspectRatio;
-(int)bitrate;
@end
