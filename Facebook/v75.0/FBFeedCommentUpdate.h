/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemComment, FBCommentComposition;

@interface FBFeedCommentUpdate : NSObject {

	FBMemComment* _comment;
	FBCommentComposition* _composition;

}

@property (nonatomic,retain) FBMemComment * comment;                          //@synthesize comment=_comment - In the implementation block
@property (nonatomic,retain) FBCommentComposition * composition;              //@synthesize composition=_composition - In the implementation block
+(id)newWithComment:(id)arg1 composition:(id)arg2 ;
-(void)setComment:(FBMemComment *)arg1 ;
-(FBMemComment *)comment;
-(FBCommentComposition *)composition;
-(void)setComposition:(FBCommentComposition *)arg1 ;
@end
