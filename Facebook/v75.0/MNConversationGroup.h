/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBStringWithRedactedDescription, FBMImageUrlCollection, NSArray;

@interface MNConversationGroup : FBValueObject <NSCopying> {

	NSString* _fbId;
	FBStringWithRedactedDescription* _customName;
	NSString* _picHash;
	FBMImageUrlCollection* _imageUrls;
	NSArray* _conversationGroupParticipants;
	unsigned long long _statusForViewer;

}

@property (nonatomic,copy,readonly) NSString * fbId;                                           //@synthesize fbId=_fbId - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * customName;              //@synthesize customName=_customName - In the implementation block
@property (nonatomic,copy,readonly) NSString * picHash;                                        //@synthesize picHash=_picHash - In the implementation block
@property (nonatomic,copy,readonly) FBMImageUrlCollection * imageUrls;                         //@synthesize imageUrls=_imageUrls - In the implementation block
@property (nonatomic,copy,readonly) NSArray * conversationGroupParticipants;                   //@synthesize conversationGroupParticipants=_conversationGroupParticipants - In the implementation block
@property (nonatomic,readonly) unsigned long long statusForViewer;                             //@synthesize statusForViewer=_statusForViewer - In the implementation block
-(FBMImageUrlCollection *)imageUrls;
-(NSString *)fbId;
-(NSString *)picHash;
-(unsigned long long)statusForViewer;
-(id)initWithFbId:(id)arg1 customName:(id)arg2 picHash:(id)arg3 imageUrls:(id)arg4 conversationGroupParticipants:(id)arg5 statusForViewer:(unsigned long long)arg6 ;
-(NSArray *)conversationGroupParticipants;
-(FBStringWithRedactedDescription *)customName;
@end
