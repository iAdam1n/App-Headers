/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>
#import <WhatsApp/CustomLabelInputViewContollerDelegate.h>

@protocol LabelPickerViewControllerDelegate;
@class NSArray, NSMutableArray, NSString;

@interface LabelPickerViewController : WATableViewController <CustomLabelInputViewContollerDelegate> {

	NSArray* _standardLabels;
	NSMutableArray* _customLabels;
	BOOL _useGenericLabels;
	id<LabelPickerViewControllerDelegate> _delegate;
	NSString* _selectedLabel;

}

@property (assign,nonatomic,__weak) id<LabelPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * selectedLabel;                                             //@synthesize selectedLabel=_selectedLabel - In the implementation block
@property (assign,nonatomic) BOOL useGenericLabels;                                              //@synthesize useGenericLabels=_useGenericLabels - In the implementation block
-(void)doneAction:(id)arg1 ;
-(BOOL)useGenericLabels;
-(void)labelInputViewController:(id)arg1 didSaveLabel:(id)arg2 ;
-(void)labelInputViewControllerDidCancel:(id)arg1 ;
-(void)setUseGenericLabels:(BOOL)arg1 ;
-(void)setDelegate:(id<LabelPickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<LabelPickerViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)standardLabels;
-(NSString *)selectedLabel;
-(void)setSelectedLabel:(NSString *)arg1 ;
-(void)cancelAction:(id)arg1 ;
@end
