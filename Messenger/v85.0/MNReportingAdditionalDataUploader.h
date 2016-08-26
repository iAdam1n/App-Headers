/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRapidReportingAdditionalDataUploader.h>

@protocol MNSecureThreadReportingFlowReading;
@class NSString;

@interface MNReportingAdditionalDataUploader : NSObject <FBRapidReportingAdditionalDataUploader> {

	id<MNSecureThreadReportingFlowReading> _secureThreadService;
	NSString* _otherUserFBID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSecureThreadService:(id)arg1 otherUserFBID:(id)arg2 ;
-(void)performUploadWithSRTJobID:(id)arg1 promptNodeToken:(id)arg2 session:(id)arg3 onSuccess:(/*^block*/id)arg4 onError:(/*^block*/id)arg5 ;
@end
