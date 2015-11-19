/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray, ECHomePageConfiguration;

@interface ECBusinessStripesDataProvider : NSObject {

	NSArray* _items;
	ECHomePageConfiguration* _homePageConfiguration;

}

@property (nonatomic,retain) NSArray * items;                                                     //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) ECHomePageConfiguration * homePageConfiguration;              //@synthesize homePageConfiguration=_homePageConfiguration - In the implementation block
-(id)initWithHomePageConfiguration:(id)arg1 ;
-(id)businessStripeWithIdentifier:(id)arg1 ;
-(void)setHomePageConfiguration:(ECHomePageConfiguration *)arg1 ;
-(ECHomePageConfiguration *)homePageConfiguration;
-(void)updateItemsWithUserSettings:(id)arg1 ;
-(void)updateItemWithUserSettings:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
@end
