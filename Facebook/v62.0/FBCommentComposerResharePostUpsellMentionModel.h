/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMention, FBMemPerson;

@interface FBCommentComposerResharePostUpsellMentionModel : FBValueObject <NSCopying> {

	FBMention* _mention;
	FBMemPerson* _mentionee;

}

@property (nonatomic,copy,readonly) FBMention * mention;                  //@synthesize mention=_mention - In the implementation block
@property (nonatomic,copy,readonly) FBMemPerson * mentionee;              //@synthesize mentionee=_mentionee - In the implementation block
-(FBMention *)mention;
-(FBMemPerson *)mentionee;
-(id)initWithMention:(id)arg1 mentionee:(id)arg2 ;
@end
