/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableArray;

@interface EDAMsendMessageToSharedNotebookMembers_args : NSObject <NSCoding> {

	NSString* __authenticationToken;
	NSString* __notebookGuid;
	NSString* __messageText;
	NSMutableArray* __recipients;
	BOOL __authenticationToken_isset;
	BOOL __notebookGuid_isset;
	BOOL __messageText_isset;
	BOOL __recipients_isset;

}

@property (setter=setAuthenticationToken:,getter=authenticationToken,nonatomic,retain) NSString * authenticationToken; 
@property (setter=setNotebookGuid:,getter=notebookGuid,nonatomic,retain) NSString * notebookGuid; 
@property (setter=setMessageText:,getter=messageText,nonatomic,retain) NSString * messageText; 
@property (setter=setRecipients:,getter=recipients,nonatomic,retain) NSMutableArray * recipients; 
-(void)read:(id)arg1 ;
-(void)setNotebookGuid:(NSString *)arg1 ;
-(NSString *)notebookGuid;
-(BOOL)notebookGuidIsSet;
-(void)unsetNotebookGuid;
-(BOOL)authenticationTokenIsSet;
-(void)unsetAuthenticationToken;
-(id)initWithAuthenticationToken:(id)arg1 notebookGuid:(id)arg2 messageText:(id)arg3 recipients:(id)arg4 ;
-(BOOL)messageTextIsSet;
-(void)unsetMessageText;
-(BOOL)recipientsIsSet;
-(void)unsetRecipients;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(NSMutableArray *)recipients;
-(void)setRecipients:(NSMutableArray *)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)write:(id)arg1 ;
@end

