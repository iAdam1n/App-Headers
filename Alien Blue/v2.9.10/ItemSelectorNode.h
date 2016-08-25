/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/JMOutlineNode.h>

@class NSString, UIImage;

@interface ItemSelectorNode : JMOutlineNode {

	NSString* title_;
	NSString* uniqueId_;
	NSString* thumbUrl_;
	UIImage* icon_;
	UIImage* placeholderIcon_;

}

@property (nonatomic,retain) NSString * uniqueId; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * thumbUrl; 
@property (nonatomic,retain) UIImage * placeholderIcon; 
@property (nonatomic,retain) UIImage * icon; 
+(Class)cellClass;
-(NSString *)thumbUrl;
-(void)setThumbUrl:(NSString *)arg1 ;
-(UIImage *)placeholderIcon;
-(void)setPlaceholderIcon:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setIcon:(UIImage *)arg1 ;
-(NSString *)uniqueId;
-(UIImage *)icon;
-(void)setUniqueId:(NSString *)arg1 ;
@end

