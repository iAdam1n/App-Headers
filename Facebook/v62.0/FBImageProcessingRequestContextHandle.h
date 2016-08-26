/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBImageProcessingSubPipeDelegate.h>

@class NSString;

@interface FBImageProcessingRequestContextHandle : NSObject <FBImageProcessingSubPipeDelegate> {

	BOOL _pruneOldestFirst;
	BOOL _prioritizeNewRequestsWhenSorting;

}

@property (assign,nonatomic) BOOL pruneOldestFirst;                              //@synthesize pruneOldestFirst=_pruneOldestFirst - In the implementation block
@property (assign,nonatomic) BOOL prioritizeNewRequestsWhenSorting;              //@synthesize prioritizeNewRequestsWhenSorting=_prioritizeNewRequestsWhenSorting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)imageProcessingSubPipe:(id)arg1 willProcessRequests:(id)arg2 needSort:(BOOL)arg3 ;
-(void)imageProcessingSubPipe:(id)arg1 willPruneOrderedProcessRequests:(id)arg2 ;
-(BOOL)pruneOldestFirst;
-(void)setPruneOldestFirst:(BOOL)arg1 ;
-(BOOL)prioritizeNewRequestsWhenSorting;
-(void)setPrioritizeNewRequestsWhenSorting:(BOOL)arg1 ;
@end
