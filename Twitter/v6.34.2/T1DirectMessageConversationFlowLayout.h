/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>
#import <Twitter/T1DirectMessageConversationActivityIndicatorLayoutDelegate.h>

@class T1DirectMessageConversationActivityIndicatorLayout;

@interface T1DirectMessageConversationFlowLayout : UICollectionViewFlowLayout <T1DirectMessageConversationActivityIndicatorLayoutDelegate> {

	T1DirectMessageConversationActivityIndicatorLayout* _activityIndicator;

}

@property (nonatomic,readonly) UIEdgeInsets collectionViewInsets; 
@property (nonatomic,retain) T1DirectMessageConversationActivityIndicatorLayout * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(BOOL)activityIndicatorLayoutShouldShowLoadTopActivityIndicator:(id)arg1 ;
-(double)widthForActivityIndicatorLayout:(id)arg1 ;
-(BOOL)_shouldShowLoadTopActivityIndicator;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setActivityIndicator:(T1DirectMessageConversationActivityIndicatorLayout *)arg1 ;
-(T1DirectMessageConversationActivityIndicatorLayout *)activityIndicator;
-(UIEdgeInsets)collectionViewInsets;
@end

