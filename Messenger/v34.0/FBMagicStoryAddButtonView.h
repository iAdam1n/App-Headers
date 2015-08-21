/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol FBMagicStoryAddButtonViewDelegate;
@class UIButton;

@interface FBMagicStoryAddButtonView : UICollectionReusableView {

	UIButton* _addPhotosButton;
	id<FBMagicStoryAddButtonViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMagicStoryAddButtonViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)didTapAddPhotosButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMagicStoryAddButtonViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBMagicStoryAddButtonViewDelegate>)delegate;
@end

