/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:21:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6DE74A4E-11EF-47B8-8E27-4C42F9CB282C/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Palaver/Palaver.NetworkSelectDelegate.h>

@class QueryController, IRCNetwork, NSString;

@interface AddQueryViewController : UITableViewController <Palaver.NetworkSelectDelegate> {

	int _queryType;
	QueryController* _queryController;
	IRCNetwork* _network;
	NSString* _name;
	NSString* _password;

}

@property (retain) QueryController * queryController;              //@synthesize queryController=_queryController - In the implementation block
@property (retain) IRCNetwork * network;                           //@synthesize network=_network - In the implementation block
@property (retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (retain) NSString * password;                            //@synthesize password=_password - In the implementation block
@property (assign) int queryType;                                  //@synthesize queryType=_queryType - In the implementation block
-(int)queryType;
-(void)setQueryController:(QueryController *)arg1 ;
-(void)setQueryType:(int)arg1 ;
-(QueryController *)queryController;
-(void)setNewName:(id)arg1 ;
-(void)setNewPassword:(id)arg1 ;
-(void)setSelectedNetwork:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)viewDidLoad;
-(void)close;
-(void)complete;
-(IRCNetwork *)network;
-(void)setNetwork:(IRCNetwork *)arg1 ;
@end

