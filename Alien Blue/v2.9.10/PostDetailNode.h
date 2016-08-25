/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/JMOutlineNode.h>

@class NSString, UIImage;

@interface PostDetailNode : JMOutlineNode {

	NSString* key_;
	NSString* title_;
	NSString* value_;
	NSString* placeholder_;
	UIImage* icon_;
	UIImage* disclosureIcon_;

}

@property (nonatomic,retain) NSString * key; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * value; 
@property (nonatomic,retain) NSString * placeholder; 
@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,retain) UIImage * disclosureIcon; 
+(Class)cellClass;
-(void)setDisclosureIcon:(UIImage *)arg1 ;
-(UIImage *)disclosureIcon;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)key;
-(NSString *)title;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(NSString *)placeholder;
-(void)setKey:(NSString *)arg1 ;
-(UIImage *)icon;
@end

