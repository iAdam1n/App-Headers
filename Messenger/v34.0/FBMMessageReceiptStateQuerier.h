/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>

@protocol MNAuthenticationManager;
@class NSString;

@interface FBMMessageReceiptStateQuerier : NSObject <FBSessionClassProvidable> {

	id<MNAuthenticationManager> _authManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithAuthManager:(id)arg1 ;
-(unsigned long long)_readReceiptStateForMessage:(id)arg1 participantInfoCollection:(id)arg2 readParticipantQueryData:(id)arg3 ;
-(unsigned long long)messageReceiptStateForMessage:(id)arg1 threadSummary:(id)arg2 ;
-(unsigned long long)DEPRECATED_messageStateForMessage:(id)arg1 participants:(id)arg2 readParticipantQueryDataIncludingSender:(id)arg3 readParticipantQueryDataExcludingSender:(id)arg4 isLastRow:(BOOL)arg5 isLastRowFromMe:(BOOL)arg6 ;
-(unsigned long long)messageReceiptStateForThreadSummary:(id)arg1 threadSnippet:(id)arg2 newestDisplayableMessage:(id)arg3 ;
-(BOOL)isThreadReadByAllOtherParticipants:(id)arg1 threadSnippet:(id)arg2 hasPendingMessage:(BOOL)arg3 latestMessage:(id)arg4 ;
@end

