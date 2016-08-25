/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface FBAdImage : NSObject {

	NSURL* _url;
	long long _width;
	long long _height;
	long long _type;

}

@property (nonatomic,copy) NSURL * url;                     //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) long long width;               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) long long height;              //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
+(void)loadImagesAsync:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)loadImagesAsyncWithBlurredImages:(id)arg1 withContext:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)preloadImageAsync;
-(id)initWithURL:(id)arg1 width:(long long)arg2 height:(long long)arg3 ;
-(void)loadImageAsyncWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(NSURL *)url;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(long long)width;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)height;
-(void)setWidth:(long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
@end

