/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/GPBMessage.h>

@class NSString, WAPBMessage_SenderKeyDistributionMessage, WAPBMessage_ImageMessage, WAPBMessage_ContactMessage, WAPBMessage_LocationMessage, WAPBMessage_ExtendedTextMessage, WAPBMessage_DocumentMessage, WAPBMessage_AudioMessage, WAPBMessage_VideoMessage, WAPBMessage_Call, WAPBMessage_Chat;

@interface WAPBMessage : GPBMessage

@property (nonatomic,copy) NSString * conversation; 
@property (assign,nonatomic) BOOL hasConversation; 
@property (nonatomic,retain) WAPBMessage_SenderKeyDistributionMessage * senderKeyDistributionMessage; 
@property (assign,nonatomic) BOOL hasSenderKeyDistributionMessage; 
@property (nonatomic,retain) WAPBMessage_ImageMessage * imageMessage; 
@property (assign,nonatomic) BOOL hasImageMessage; 
@property (nonatomic,retain) WAPBMessage_ContactMessage * contactMessage; 
@property (assign,nonatomic) BOOL hasContactMessage; 
@property (nonatomic,retain) WAPBMessage_LocationMessage * locationMessage; 
@property (assign,nonatomic) BOOL hasLocationMessage; 
@property (nonatomic,retain) WAPBMessage_ExtendedTextMessage * extendedTextMessage; 
@property (assign,nonatomic) BOOL hasExtendedTextMessage; 
@property (nonatomic,retain) WAPBMessage_DocumentMessage * documentMessage; 
@property (assign,nonatomic) BOOL hasDocumentMessage; 
@property (nonatomic,retain) WAPBMessage_AudioMessage * audioMessage; 
@property (assign,nonatomic) BOOL hasAudioMessage; 
@property (nonatomic,retain) WAPBMessage_VideoMessage * videoMessage; 
@property (assign,nonatomic) BOOL hasVideoMessage; 
@property (nonatomic,retain) WAPBMessage_Call * call; 
@property (assign,nonatomic) BOOL hasCall; 
@property (nonatomic,retain) WAPBMessage_Chat * chat; 
@property (assign,nonatomic) BOOL hasChat; 
+(id)descriptor;
@end
