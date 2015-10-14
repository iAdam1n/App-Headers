/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:50:29 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/34410EF6-4E83-412E-A9C2-1231076AA068/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class PLVUserPreferences, NSArray;

@interface FontSizeViewController : UITableViewController {

	PLVUserPreferences* _userPreferences;
	NSArray* _fontSizes;

}

@property (nonatomic,readonly) PLVUserPreferences * userPreferences;              //@synthesize userPreferences=_userPreferences - In the implementation block
@property (nonatomic,copy) NSArray * fontSizes;                                   //@synthesize fontSizes=_fontSizes - In the implementation block
-(PLVUserPreferences *)userPreferences;
-(id)initWithUserPreferences:(id)arg1 ;
-(void)setFontSizes:(NSArray *)arg1 ;
-(NSArray *)fontSizes;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
@end

