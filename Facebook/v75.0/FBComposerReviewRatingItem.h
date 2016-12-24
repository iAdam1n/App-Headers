/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerPublishTarget, NSString;

@interface FBComposerReviewRatingItem : FBValueObject <NSCopying> {

	BOOL _showItem;
	FBComposerPublishTarget* _publishTarget;
	NSString* _compositionID;
	long long _rating;

}

@property (nonatomic,readonly) BOOL showItem;                                             //@synthesize showItem=_showItem - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPublishTarget * publishTarget;              //@synthesize publishTarget=_publishTarget - In the implementation block
@property (nonatomic,copy,readonly) NSString * compositionID;                             //@synthesize compositionID=_compositionID - In the implementation block
@property (nonatomic,readonly) long long rating;                                          //@synthesize rating=_rating - In the implementation block
-(NSString *)compositionID;
-(FBComposerPublishTarget *)publishTarget;
-(BOOL)showItem;
-(id)initWithShowItem:(BOOL)arg1 publishTarget:(id)arg2 compositionID:(id)arg3 rating:(long long)arg4 ;
-(long long)rating;
@end
