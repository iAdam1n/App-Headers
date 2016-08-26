/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPSelection.h>

@class NSData, NSString;

@interface SKPChatSelection : SKPSelection {

	BOOL _shouldExcludeComposedMessage;
	BOOL _shouldFocusInputField;
	BOOL _shouldShowLinkToCloudChat;
	BOOL _shouldStartVoiceCall;
	BOOL _shouldStartVideoCall;
	BOOL _shouldPrepopulateInputField;
	unsigned long long _messageObjectId;
	NSData* _messageGUID;
	unsigned long long _messageServerId;
	NSString* _messageText;
	long long _emoticonTabIndexThatShouldBeFocused;
	NSString* _prepopulatedText;

}

@property (assign,nonatomic) unsigned long long messageObjectId;                         //@synthesize messageObjectId=_messageObjectId - In the implementation block
@property (nonatomic,retain) NSData * messageGUID;                                       //@synthesize messageGUID=_messageGUID - In the implementation block
@property (assign,nonatomic) unsigned long long messageServerId;                         //@synthesize messageServerId=_messageServerId - In the implementation block
@property (nonatomic,retain) NSString * messageText;                                     //@synthesize messageText=_messageText - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeComposedMessage;                          //@synthesize shouldExcludeComposedMessage=_shouldExcludeComposedMessage - In the implementation block
@property (assign,nonatomic) BOOL shouldFocusInputField;                                 //@synthesize shouldFocusInputField=_shouldFocusInputField - In the implementation block
@property (assign,nonatomic) long long emoticonTabIndexThatShouldBeFocused;              //@synthesize emoticonTabIndexThatShouldBeFocused=_emoticonTabIndexThatShouldBeFocused - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLinkToCloudChat;                             //@synthesize shouldShowLinkToCloudChat=_shouldShowLinkToCloudChat - In the implementation block
@property (assign,nonatomic) BOOL shouldStartVoiceCall;                                  //@synthesize shouldStartVoiceCall=_shouldStartVoiceCall - In the implementation block
@property (assign,nonatomic) BOOL shouldStartVideoCall;                                  //@synthesize shouldStartVideoCall=_shouldStartVideoCall - In the implementation block
@property (assign,nonatomic) BOOL shouldPrepopulateInputField;                           //@synthesize shouldPrepopulateInputField=_shouldPrepopulateInputField - In the implementation block
@property (nonatomic,retain) NSString * prepopulatedText;                                //@synthesize prepopulatedText=_prepopulatedText - In the implementation block
+(id)selectionWithMessageGUID:(id)arg1 ;
+(id)selectionWithMessageObjectId:(unsigned long long)arg1 ;
+(id)selectionWithMessageServerId:(unsigned long long)arg1 ;
+(id)selectionWithMessageText:(id)arg1 ;
+(id)selectionToExcludeComposedMessage:(BOOL)arg1 ;
-(unsigned long long)messageObjectId;
-(BOOL)shouldExcludeComposedMessage;
-(BOOL)shouldFocusInputField;
-(BOOL)shouldShowLinkToCloudChat;
-(BOOL)shouldPrepopulateInputField;
-(NSString *)prepopulatedText;
-(void)setMessageObjectId:(unsigned long long)arg1 ;
-(void)setMessageServerId:(unsigned long long)arg1 ;
-(void)setShouldExcludeComposedMessage:(BOOL)arg1 ;
-(void)setShouldFocusInputField:(BOOL)arg1 ;
-(void)setEmoticonTabIndexThatShouldBeFocused:(long long)arg1 ;
-(void)setShouldShowLinkToCloudChat:(BOOL)arg1 ;
-(void)setShouldPrepopulateInputField:(BOOL)arg1 ;
-(void)setPrepopulatedText:(NSString *)arg1 ;
-(BOOL)isFirstLevelEqualToSelection:(id)arg1 ;
-(id)firstLevelDescription;
-(id)excludeComposedMessage;
-(id)focusInputField;
-(id)focusEmoticonPickerTabWithIndex:(long long)arg1 ;
-(id)showLinkToCloudChat;
-(id)prepopulateInputField;
-(id)prepopulatedText:(id)arg1 ;
-(unsigned long long)messageServerId;
-(long long)emoticonTabIndexThatShouldBeFocused;
-(BOOL)shouldStartVoiceCall;
-(void)setShouldStartVoiceCall:(BOOL)arg1 ;
-(BOOL)shouldStartVideoCall;
-(void)setShouldStartVideoCall:(BOOL)arg1 ;
-(id)init;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(NSData *)messageGUID;
-(void)setMessageGUID:(NSData *)arg1 ;
@end
