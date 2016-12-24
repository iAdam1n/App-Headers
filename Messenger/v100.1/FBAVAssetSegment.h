/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, AVAsset;

@interface FBAVAssetSegment : NSObject <NSCoding> {

	NSURL* _url;
	unsigned long long _type;
	AVAsset* _asset;

}

@property (nonatomic,copy) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) AVAsset * asset;                      //@synthesize asset=_asset - In the implementation block
+(id)propertiesToSkipForCoding;
+(id)newWithURL:(id)arg1 asset:(id)arg2 type:(unsigned long long)arg3 ;
+(id)newWithURL:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithURL:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithURL:(id)arg1 asset:(id)arg2 type:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSURL *)url;
-(unsigned long long)type;
-(void)setUrl:(NSURL *)arg1 ;
-(AVAsset *)asset;
@end
