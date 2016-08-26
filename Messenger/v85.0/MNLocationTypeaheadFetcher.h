/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MKSearchCompleterDelegate.h>
#import <Messenger/MKLocalSearchCompleterDelegate.h>
#import <Messenger/MNLocationTypeaheadFetching.h>

@protocol MNLocationTypeaheadFetcherDelegate;
@class MKLocalSearchCompleter, NSString;

@interface MNLocationTypeaheadFetcher : NSObject <MKSearchCompleterDelegate, MKLocalSearchCompleterDelegate, MNLocationTypeaheadFetching> {

	MKLocalSearchCompleter* _localSearchCompleter;
	id<MNLocationTypeaheadFetcherDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNLocationTypeaheadFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)fetchLocationsWithSearchQuery:(id)arg1 forLocation:(CGPoint)arg2 radius:(double)arg3 ;
-(void)_handleCompleterDidUpdateResultsWithResults:(id)arg1 ;
-(void)_handleCompleterDidFailWithError:(id)arg1 ;
-(void)setDelegate:(id<MNLocationTypeaheadFetcherDelegate>)arg1 ;
-(id<MNLocationTypeaheadFetcherDelegate>)delegate;
-(void)completer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)completerDidUpdateResults:(id)arg1 ;
-(void)completerDidUpdateResults:(id)arg1 finished:(BOOL)arg2 ;
-(void)completerDidFail:(id)arg1 error:(id)arg2 ;
@end
