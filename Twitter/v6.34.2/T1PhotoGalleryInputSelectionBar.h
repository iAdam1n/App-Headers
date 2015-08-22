/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@protocol T1PhotoGalleryInputSelectionBarDelegate;
@class UIToolbar;

@interface T1PhotoGalleryInputSelectionBar : UIView {

	id<T1PhotoGalleryInputSelectionBarDelegate> _delegate;
	UIToolbar* _toolbar;

}

@property (assign,nonatomic,__weak) id<T1PhotoGalleryInputSelectionBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIToolbar * toolbar;                                                      //@synthesize toolbar=_toolbar - In the implementation block
-(void)_openCamera;
-(void)_openVideo;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<T1PhotoGalleryInputSelectionBarDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<T1PhotoGalleryInputSelectionBarDelegate>)delegate;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
@end
