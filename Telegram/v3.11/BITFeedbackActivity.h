/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <Telegram/BITFeedbackComposeViewControllerDelegate.h>

@class UIImage, NSString, NSMutableArray;

@interface BITFeedbackActivity : UIActivity <BITFeedbackComposeViewControllerDelegate> {

	UIImage* _customActivityImage;
	NSString* _customActivityTitle;
	NSMutableArray* _items;

}

@property (nonatomic,retain) UIImage * customActivityImage;               //@synthesize customActivityImage=_customActivityImage - In the implementation block
@property (nonatomic,retain) NSString * customActivityTitle;              //@synthesize customActivityTitle=_customActivityTitle - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                      //@synthesize items=_items - In the implementation block
-(void)feedbackComposeViewControllerDidFinish:(id)arg1 ;
-(NSString *)customActivityTitle;
-(UIImage *)customActivityImage;
-(void)setCustomActivityImage:(UIImage *)arg1 ;
-(void)setCustomActivityTitle:(NSString *)arg1 ;
-(id)init;
-(id)activityType;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(id)activityViewController;
@end
