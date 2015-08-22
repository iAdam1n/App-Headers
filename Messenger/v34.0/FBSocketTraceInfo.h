/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, FBMobileTraceAsyncTokenPtr;

@interface FBSocketTraceInfo : NSObject {

	NSString* _socketID;
	FBMobileTraceAsyncTokenPtr* _mobileTraceAsyncToken;

}

@property (nonatomic,copy,readonly) NSString * socketID;                                      //@synthesize socketID=_socketID - In the implementation block
@property (nonatomic,retain) FBMobileTraceAsyncTokenPtr * mobileTraceAsyncToken;              //@synthesize mobileTraceAsyncToken=_mobileTraceAsyncToken - In the implementation block
-(FBMobileTraceAsyncTokenPtr *)mobileTraceAsyncToken;
-(void)setMobileTraceAsyncToken:(FBMobileTraceAsyncTokenPtr *)arg1 ;
-(NSString *)socketID;
-(id)initWithSocketID:(id)arg1 mobileTraceAsyncToken:(id)arg2 ;
-(id)init;
@end
