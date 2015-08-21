/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class ITCPlaceholderView;

@interface ITCPlaceholderCell : UICollectionViewCell {

	ITCPlaceholderView* _placeholderView;

}

@property (nonatomic,retain) ITCPlaceholderView * placeholderView;              //@synthesize placeholderView=_placeholderView - In the implementation block
-(void)showPlaceholderWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 animated:(BOOL)arg4 ;
-(void)hidePlaceholderAnimated:(BOOL)arg1 ;
-(void)setPlaceholderView:(ITCPlaceholderView *)arg1 ;
-(ITCPlaceholderView *)placeholderView;
@end

