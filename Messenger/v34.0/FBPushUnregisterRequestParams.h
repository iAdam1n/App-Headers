/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface FBPushUnregisterRequestParams : NSObject {

	NSString* _token;
	NSString* _transmitterID;

}

@property (nonatomic,copy) NSString * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * transmitterID;              //@synthesize transmitterID=_transmitterID - In the implementation block
-(void)setTransmitterID:(NSString *)arg1 ;
-(NSString *)transmitterID;
-(id)initWithToken:(id)arg1 transmitterID:(id)arg2 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
@end

