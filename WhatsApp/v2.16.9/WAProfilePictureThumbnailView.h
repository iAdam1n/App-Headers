/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIImageView.h>

@class NSString, UIColor;

@interface WAProfilePictureThumbnailView : UIImageView {

	BOOL _round;
	NSString* _jid;
	UIColor* _placeholderColor;

}

@property (nonatomic,copy) NSString * jid;                            //@synthesize jid=_jid - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;              //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,getter=isRound,nonatomic) BOOL round;               //@synthesize round=_round - In the implementation block
-(NSString *)jid;
-(void)setJid:(NSString *)arg1 ;
-(void)profilePictureManagerDidPictureChange:(id)arg1 ;
-(BOOL)isRound;
-(void)setProfilePictureImage:(id)arg1 ;
-(void)setRound:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)commonInit;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(void)reloadImage;
@end

