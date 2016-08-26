/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityItemProvider.h>

@class ECAd, UIImage;

@interface ECActivityItemSource : UIActivityItemProvider {

	ECAd* _ad;
	unsigned long long _type;
	UIImage* _image;

}

@property (nonatomic,retain) ECAd * ad;                            //@synthesize ad=_ad - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIImage * image;                      //@synthesize image=_image - In the implementation block
+(id)activityItemSourceForAllTypesAndAd:(id)arg1 andImage:(id)arg2 ;
+(id)networkForActivityType:(id)arg1 ;
-(void)setAd:(ECAd *)arg1 ;
-(id)initWithAd:(id)arg1 type:(unsigned long long)arg2 image:(id)arg3 ;
-(void)attemptToStartSharingActivityForType:(id)arg1 ;
-(BOOL)shouldReturnItemForType:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(UIImage *)image;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(ECAd *)ad;
@end
