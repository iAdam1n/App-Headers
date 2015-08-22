/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNInAppNotificationViewDataSource.h>
#import <Messenger/FBClassProvidable.h>

@class FBMThreadSummary, FBMMessageAppModel, FBMUser, MNProfileImageView, MNProfileImageViewController, MNThreadImageManager, FBMParticipantNameFormatter, FBMThreadSnippetGenerator, FBMStringWithRedactedDescription, NSString;

@interface MNInAppNotificationMessageDataSource : NSObject <MNInAppNotificationViewDataSource, FBClassProvidable> {

	FBMThreadSummary* _threadSummary;
	FBMMessageAppModel* _message;
	FBMUser* _sender;
	MNProfileImageView* _profileImageView;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManger;
	FBMParticipantNameFormatter* _nameFormatter;
	FBMThreadSnippetGenerator* _threadSnippetGenerator;
	FBMStringWithRedactedDescription* _messageText;
	NSString* _participantName;

}

@property (nonatomic,readonly) FBMThreadSummary * threadSummary;              //@synthesize threadSummary=_threadSummary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMThreadSummary *)threadSummary;
-(id)initWithThreadImageManager:(id)arg1 profileImageViewController:(id)arg2 nameFormatter:(id)arg3 threadSnippetGenerator:(id)arg4 ;
-(void)_initParticipantNameIfNecessary;
-(void)_initMessageTextIfNecessary;
-(void)_setProfileImageViewImageIfNecessary;
-(id)_generateMessageText;
-(id)inAppNotificationMessage;
-(id)inAppNotificationTitle;
-(id)inAppNotificationImageView;
-(void)configureForMessage:(id)arg1 threadSummary:(id)arg2 sender:(id)arg3 ;
@end
