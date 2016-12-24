/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/SRCollectionFragmentController.h>
#import <Facebook/SRLeafFragmentMutator.h>

@class NSString;

@interface SRLeafFragmentController : SRCollectionFragmentController <SRLeafFragmentMutator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)insertAtIndex:(long long)arg1 ;
-(void)deleteAtIndex:(long long)arg1 ;
-(void)moveFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)invalidateLayoutAnimated:(BOOL)arg1 ;
-(void)insertAtIndexSet:(id)arg1 ;
-(void)deleteAtIndexSet:(id)arg1 ;
-(void)reloadData;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
@end
