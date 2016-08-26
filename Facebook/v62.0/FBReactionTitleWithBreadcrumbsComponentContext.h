/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReactionTitleWithBreadcrumbsComponentDelegate;
@class FBMemTextWithEntities, NSArray;

@interface FBReactionTitleWithBreadcrumbsComponentContext : NSObject {

	FBMemTextWithEntities* _title;
	FBMemTextWithEntities* _category;
	NSArray* _breadcrumbs;
	double _rightPadding;
	id<FBReactionTitleWithBreadcrumbsComponentDelegate> _componentDelegate;

}

@property (nonatomic,readonly) FBMemTextWithEntities * title;                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) FBMemTextWithEntities * category;                                                          //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSArray * breadcrumbs;                                                                //@synthesize breadcrumbs=_breadcrumbs - In the implementation block
@property (assign,nonatomic) double rightPadding;                                                                         //@synthesize rightPadding=_rightPadding - In the implementation block
@property (nonatomic,__weak,readonly) id<FBReactionTitleWithBreadcrumbsComponentDelegate> componentDelegate;              //@synthesize componentDelegate=_componentDelegate - In the implementation block
+(id)newWithTitle:(id)arg1 category:(id)arg2 breadcrumbs:(id)arg3 rightPadding:(double)arg4 componentDelegate:(id)arg5 ;
-(NSArray *)breadcrumbs;
-(id<FBReactionTitleWithBreadcrumbsComponentDelegate>)componentDelegate;
-(FBMemTextWithEntities *)category;
-(FBMemTextWithEntities *)title;
-(void)setRightPadding:(double)arg1 ;
-(double)rightPadding;
@end
