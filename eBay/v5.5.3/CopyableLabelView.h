/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UILabel.h>

@class UIColor;

@interface CopyableLabelView : UILabel {

	UIColor* currentBGColor;
	BOOL showingMenu;
	UIColor* backgroundColorToRestore;

}

@property (nonatomic,retain) UIColor * backgroundColorToRestore; 
-(void)menuHide:(id)arg1 ;
-(void)showMenuAtPoint:(CGPoint)arg1 ;
-(void)setBackgroundColorToRestore:(UIColor *)arg1 ;
-(UIColor *)backgroundColorToRestore;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)awakeFromNib;
-(BOOL)canBecomeFirstResponder;
-(void)copy:(id)arg1 ;
-(void)setup;
-(void)showMenu:(id)arg1 ;
@end
