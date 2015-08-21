/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTwitterScribe;

@interface TFNTwitterMomentCapsuleScribeDelegate : NSObject {

	TFNTwitterScribe* _scribe;

}

@property (nonatomic,retain) TFNTwitterScribe * scribe;              //@synthesize scribe=_scribe - In the implementation block
+(id)_scribeParametersForMoment:(id)arg1 currentPage:(id)arg2 isCurrentPageCover:(BOOL)arg3 isCurrentPageEnd:(BOOL)arg4 previousPage:(id)arg5 wrapInItems:(BOOL)arg6 includeTransition:(BOOL)arg7 userActionNumber:(id)arg8 ;
+(id)_scribeComponentForFollowSource:(long long)arg1 ;
-(TFNTwitterScribe *)scribe;
-(id)scribePage;
-(id)scribeSection;
-(id)scribeElement;
-(void)setScribe:(TFNTwitterScribe *)arg1 ;
-(id)initWithScribe:(id)arg1 ;
-(void)scribeSwipeWithMoment:(id)arg1 currentPage:(id)arg2 previousPage:(id)arg3 swipeDirection:(long long)arg4 isCoverPage:(BOOL)arg5 isEndPage:(BOOL)arg6 ;
-(void)scribeImpressionWithMoment:(id)arg1 page:(id)arg2 isCoverPage:(BOOL)arg3 isEndPage:(BOOL)arg4 ;
-(void)scribeBoltSheetOpenWithMoment:(id)arg1 page:(id)arg2 ;
-(void)scribeUserActionWithMoment:(id)arg1 page:(id)arg2 userAction:(long long)arg3 ;
-(void)scribeFollowActionWithMoment:(id)arg1 page:(id)arg2 source:(long long)arg3 ;
-(void)scribeBoltSheetCloseWithMoment:(id)arg1 page:(id)arg2 ;
@end

