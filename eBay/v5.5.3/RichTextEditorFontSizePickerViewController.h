/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RichTextEditorFontSizePickerViewControllerDelegate, RichTextEditorFontSizePickerViewControllerDataSource;
@class UITableView, NSArray, NSString;

@interface RichTextEditorFontSizePickerViewController : EUIViewController <UITableViewDataSource, UITableViewDelegate> {

	id<RichTextEditorFontSizePickerViewControllerDelegate> _delegate;
	id<RichTextEditorFontSizePickerViewControllerDataSource> _dataSource;
	UITableView* _tableview;
	NSArray* _fontSizes;

}

@property (assign,nonatomic,__weak) id<RichTextEditorFontSizePickerViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<RichTextEditorFontSizePickerViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UITableView * tableview;                                                                 //@synthesize tableview=_tableview - In the implementation block
@property (nonatomic,retain) NSArray * fontSizes;                                                                     //@synthesize fontSizes=_fontSizes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)closeSelected:(id)arg1 ;
-(UITableView *)tableview;
-(void)setTableview:(UITableView *)arg1 ;
-(void)setFontSizes:(NSArray *)arg1 ;
-(NSArray *)fontSizes;
-(void)setDataSource:(id<RichTextEditorFontSizePickerViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<RichTextEditorFontSizePickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<RichTextEditorFontSizePickerViewControllerDataSource>)dataSource;
-(id<RichTextEditorFontSizePickerViewControllerDelegate>)delegate;
-(void)viewDidLoad;
@end
