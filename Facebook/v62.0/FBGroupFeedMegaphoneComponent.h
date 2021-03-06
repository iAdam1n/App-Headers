/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>
#import <Facebook/FBMegaphoneViewDelegate.h>

@class FBGroupFeedActionHandler, NSString;

@interface FBGroupFeedMegaphoneComponent : CKComponent <FBMegaphoneViewDelegate> {

	FBGroupFeedActionHandler* _actionHandler;

}

@property (nonatomic,retain) FBGroupFeedActionHandler * actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithToolbox:(id)arg1 ;
+(id)megaphoneConfig;
-(void)megaphoneViewWasDismissed:(id)arg1 ;
-(void)megaphoneView:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(FBGroupFeedActionHandler *)actionHandler;
-(void)setActionHandler:(FBGroupFeedActionHandler *)arg1 ;
@end

