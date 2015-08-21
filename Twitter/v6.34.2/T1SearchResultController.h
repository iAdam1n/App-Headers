/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1ContainerViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/T1SearchResultsPresenting.h>

@class TFNTwitterAccount, TFNTwitterSearchStream, NSString, T1SearchResultEntry, UIViewController;

@interface T1SearchResultController : T1ContainerViewController <TFNTwitterAuthenticated, T1SearchResultsPresenting> {

	TFNTwitterAccount* _account;
	TFNTwitterSearchStream* _searchStream;
	NSString* _scribeParameterContext;
	T1SearchResultEntry* _searchResultEntry;

}

@property (nonatomic,readonly) TFNTwitterSearchStream * searchStream;                  //@synthesize searchStream=_searchStream - In the implementation block
@property (nonatomic,readonly) NSString * scribeParameterContext;                      //@synthesize scribeParameterContext=_scribeParameterContext - In the implementation block
@property (nonatomic,readonly) T1SearchResultEntry * searchResultEntry;                //@synthesize searchResultEntry=_searchResultEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                              //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) UIViewController * selectedViewController; 
-(id)scribePage;
-(TFNTwitterSearchStream *)searchStream;
-(BOOL)filtersEnabled;
-(id)initWithAccount:(id)arg1 searchStream:(id)arg2 scribeParameterContext:(id)arg3 ;
-(id)scribeContext;
-(NSString *)scribeParameterContext;
-(T1SearchResultEntry *)searchResultEntry;
-(id)createSearchResultEntry;
-(id)scribeResultFilter;
-(id)scribeParameterSearchDetails;
-(id)scribeSocialFilter;
-(void)viewDidLoad;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end

