/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBPushRegistrationRequestSender <NSObject>
@property (assign,nonatomic) id<FBPushRegistrationDelegate> delegate; 
@required
-(void)sendRegisterRequestWithParams:(id)arg1 session:(id)arg2;
-(void)cancelCurrentRegisterRequest;
-(void)sendUnregisterRequestWithParams:(id)arg1 session:(id)arg2;
-(void)setDelegate:(id)arg1;
-(id<FBPushRegistrationDelegate>)delegate;

@end

