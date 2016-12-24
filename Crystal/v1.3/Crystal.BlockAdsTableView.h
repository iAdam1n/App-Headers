/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:51:08 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/AA3738EF-C276-423D-BBB1-85BEAAD70331/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface Crystal.BlockAdsTableView : UITableViewController {

	 imageDataModel;
	 mainLabelDataModel;
	 subLabelDataModel;

}

@property (readonly,nonatomic) NSArray * mainLabelDataModel; 
@property (copy,nonatomic) NSArray * subLabelDataModel; 
-(NSArray *)mainLabelDataModel;
-(NSArray *)subLabelDataModel;
-(void)setSubLabelDataModel:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
@end
