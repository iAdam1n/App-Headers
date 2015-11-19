/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIActivityItemProvider.h>

@class ECAppConfig;

@interface ECShareAppActivityItemSource : UIActivityItemProvider {

	ECAppConfig* _appConfig;

}

@property (nonatomic,retain) ECAppConfig * appConfig;              //@synthesize appConfig=_appConfig - In the implementation block
+(id)allAppShareActivityItemSources;
-(id)shareAppEmailBody;
-(id)emailTemplate;
-(id)emailFirstLine;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(void)setAppConfig:(ECAppConfig *)arg1 ;
-(ECAppConfig *)appConfig;
@end
