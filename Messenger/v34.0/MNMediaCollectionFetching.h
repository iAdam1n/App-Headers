/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSArray;


@protocol MNMediaCollectionFetching <NSObject>
@property (assign,nonatomic,__weak) id<MNMediaCollectionFetchingDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * mediaCollection; 
@property (nonatomic,readonly) BOOL needsRefetch; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@required
-(void)fetchCollection;
-(BOOL)needsRefetch;
-(void)cancel;
-(void)setDelegate:(id)arg1;
-(id<MNMediaCollectionFetchingDelegate>)delegate;
-(BOOL)isEmpty;
-(NSArray *)mediaCollection;

@end

