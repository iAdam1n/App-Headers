/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBFeedLoadChunkData : NSObject {

	NSString* _responseUUID;
	unsigned long long _status;

}

@property (nonatomic,copy) NSString * responseUUID;                  //@synthesize responseUUID=_responseUUID - In the implementation block
@property (assign,nonatomic) unsigned long long status;              //@synthesize status=_status - In the implementation block
-(NSString *)responseUUID;
-(void)setResponseUUID:(NSString *)arg1 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
@end
