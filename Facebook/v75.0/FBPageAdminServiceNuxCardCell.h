/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMemPageCardCell.h>
#import <Facebook/FBPageCardProtocol.h>

@protocol FBPageAdminServiceNuxCardCellDelegate;
@class FBPageNuxClosedView, FBPageNuxView, NSString;

@interface FBPageAdminServiceNuxCardCell : FBMemPageCardCell <FBPageCardProtocol> {

	FBPageNuxClosedView* _closedView;
	FBPageNuxView* _nuxView;
	id<FBPageAdminServiceNuxCardCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPageAdminServiceNuxCardCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_enterAddServicesFlow;
-(void)_serviceNuxCrossedOut;
-(void)_displayNuxCrossOutWithText:(id)arg1 highlightRange:(NSRange)arg2 ;
-(void)_openEditPage;
-(void)displayAdminNuxWithPageName:(id)arg1 imageDownloader:(id)arg2 ;
-(void)displayAdminNuxCrossOutForNativeFlow;
-(void)displayAdminNuxCrossOut;
-(void)setDelegate:(id<FBPageAdminServiceNuxCardCellDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPageAdminServiceNuxCardCellDelegate>)delegate;
-(void)configureWithViewModel:(id)arg1 ;
@end
