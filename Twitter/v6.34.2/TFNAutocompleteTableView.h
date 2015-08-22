/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UITableView.h>
#import <Twitter/TFNLayoutMetricsEnvironment.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol TFNAutocompleteTableViewDelegate;
@class NSArray, TFNTwitterAccount, NSString;

@interface TFNAutocompleteTableView : UITableView <TFNLayoutMetricsEnvironment, UITableViewDelegate, UITableViewDataSource> {

	NSArray* autocompleteItems;
	id<TFNAutocompleteTableViewDelegate> autocompleteDelegate;
	TFNTwitterAccount* _account;

}

@property (nonatomic,retain) TFNTwitterAccount * account;                                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSArray * autocompleteItems; 
@property (assign,nonatomic,__weak) id<TFNAutocompleteTableViewDelegate> autocompleteDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutMetricsDidChange:(id)arg1 ;
-(id<TFNAutocompleteTableViewDelegate>)autocompleteDelegate;
-(void)setAutocompleteDelegate:(id<TFNAutocompleteTableViewDelegate>)arg1 ;
-(void)setAutocompleteItems:(NSArray *)arg1 ;
-(NSArray *)autocompleteItems;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end
