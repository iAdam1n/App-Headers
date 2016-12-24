/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBContactImporterRevampHeaderView, UIProgressView, NSString;

@interface FBContactImporterProgressView : UIView {

	FBContactImporterRevampHeaderView* _headerView;
	UIProgressView* _progressBar;
	NSString* _loadingText;
	NSString* _progressTextFormat;
	unsigned long long _numberOfMatchedContacts;
	unsigned long long _numberOfImportedContacts;
	unsigned long long _numberOfTotalContacts;

}

@property (assign,nonatomic) unsigned long long numberOfMatchedContacts;               //@synthesize numberOfMatchedContacts=_numberOfMatchedContacts - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfImportedContacts;              //@synthesize numberOfImportedContacts=_numberOfImportedContacts - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTotalContacts;                 //@synthesize numberOfTotalContacts=_numberOfTotalContacts - In the implementation block
-(void)_renderView;
-(unsigned long long)numberOfTotalContacts;
-(void)setNumberOfTotalContacts:(unsigned long long)arg1 ;
-(unsigned long long)numberOfImportedContacts;
-(void)setNumberOfImportedContacts:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMatchedContacts;
-(void)setNumberOfMatchedContacts:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSectionTitle:(id)arg1 ;
@end
