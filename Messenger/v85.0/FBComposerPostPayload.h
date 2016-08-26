/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerPostPromptPayload, FBComposerPostTypingPayload, NSDictionary, NSString;

@interface FBComposerPostPayload : FBValueObject <FBObjectShallowCopyProtocol, NSCopying> {

	BOOL _publishAsThrowbackPost;
	BOOL _forceReshareOfPost;
	FBComposerPostPromptPayload* _promptPayload;
	FBComposerPostTypingPayload* _typingPayload;
	NSDictionary* _trackingInfo;

}

@property (nonatomic,copy,readonly) FBComposerPostPromptPayload * promptPayload;              //@synthesize promptPayload=_promptPayload - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPostTypingPayload * typingPayload;              //@synthesize typingPayload=_typingPayload - In the implementation block
@property (nonatomic,readonly) BOOL publishAsThrowbackPost;                                   //@synthesize publishAsThrowbackPost=_publishAsThrowbackPost - In the implementation block
@property (nonatomic,readonly) BOOL forceReshareOfPost;                                       //@synthesize forceReshareOfPost=_forceReshareOfPost - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * trackingInfo;                              //@synthesize trackingInfo=_trackingInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)trackingInfo;
-(id)initWithPromptPayload:(id)arg1 typingPayload:(id)arg2 publishAsThrowbackPost:(BOOL)arg3 forceReshareOfPost:(BOOL)arg4 trackingInfo:(id)arg5 ;
-(FBComposerPostPromptPayload *)promptPayload;
-(FBComposerPostTypingPayload *)typingPayload;
-(BOOL)publishAsThrowbackPost;
-(BOOL)forceReshareOfPost;
-(id)shallowCopy;
@end
