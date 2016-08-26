/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class ITCPlaceholderView;

@interface ITCPlaceholderCell : UICollectionViewCell {

	ITCPlaceholderView* _placeholderView;

}

@property (nonatomic,retain) ITCPlaceholderView * placeholderView;              //@synthesize placeholderView=_placeholderView - In the implementation block
-(void)showPlaceholderWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 animated:(BOOL)arg4 ;
-(void)setPlaceholderView:(ITCPlaceholderView *)arg1 ;
-(ITCPlaceholderView *)placeholderView;
-(void)hidePlaceholderAnimated:(BOOL)arg1 ;
@end
