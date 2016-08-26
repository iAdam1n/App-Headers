/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>

@protocol FBServiceTransactionMutating;
@class FBReschedulableTimer;

@interface FBAdInterfacesAddressInputComponentController : CKComponentController {

	id<FBServiceTransactionMutating> _suggestionsTransactionHandle;
	FBReschedulableTimer* _suggestionTimer;

}

@property (nonatomic,retain) FBReschedulableTimer * suggestionTimer;              //@synthesize suggestionTimer=_suggestionTimer - In the implementation block
+(SEL)addressEditedAction;
+(SEL)addressCommittedAction;
+(SEL)suggestionSelectedAction;
-(void)didMount;
-(void)willUnmount;
-(void)addressEdited:(id)arg1 address:(id)arg2 ;
-(void)fetchAddressSuggestionsForQuery:(id)arg1 ;
-(void)addressCommitted:(id)arg1 address:(id)arg2 ;
-(void)suggestionSelected:(id)arg1 suggestionItem:(id)arg2 ;
-(FBReschedulableTimer *)suggestionTimer;
-(void)setSuggestionTimer:(FBReschedulableTimer *)arg1 ;
@end
