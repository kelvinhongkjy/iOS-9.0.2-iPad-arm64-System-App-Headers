//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSLayoutConstraint, NSString, UINavigationBar, UITableView, UIView;

@interface ICStyleSelectorViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _inPopover;
    unsigned int _currentStyle;
    id <ICStyleSelectorDelegate> _delegate;
    NSArray *_styles;
    UIViewController *_viewControllerToUseForPrefersStatusBarHidden;
    UITableView *_tableView;
    UINavigationBar *_navigationBar;
    UIView *_navigationBarContainer;
    NSLayoutConstraint *_tableViewTopConstraint;
    NSLayoutConstraint *_navigationBarTopSeparatorHeightConstraint;
    NSLayoutConstraint *_navigationBarBottomSeparatorHeightConstraint;
}

- (void).cxx_destruct;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)applyAccessibilityInfo;
- (void)contentSizeCategoryDidChange;
@property(nonatomic) unsigned int currentStyle; // @synthesize currentStyle=_currentStyle;
- (void)dealloc;
@property __weak id <ICStyleSelectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectDone:(id)arg1;
- (id)fontForTTNamedStyle:(unsigned int)arg1;
@property(nonatomic, getter=isInPopover) _Bool inPopover; // @synthesize inPopover=_inPopover;
@property(nonatomic) __weak UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) __weak NSLayoutConstraint *navigationBarBottomSeparatorHeightConstraint; // @synthesize navigationBarBottomSeparatorHeightConstraint=_navigationBarBottomSeparatorHeightConstraint;
@property(nonatomic) __weak UIView *navigationBarContainer; // @synthesize navigationBarContainer=_navigationBarContainer;
@property(nonatomic) __weak NSLayoutConstraint *navigationBarTopSeparatorHeightConstraint; // @synthesize navigationBarTopSeparatorHeightConstraint=_navigationBarTopSeparatorHeightConstraint;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)resetToCurrentStyle:(unsigned int)arg1;
- (void)scrollCurrentStyleToVisible;
@property(retain, nonatomic) NSArray *styles; // @synthesize styles=_styles;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak NSLayoutConstraint *tableViewTopConstraint; // @synthesize tableViewTopConstraint=_tableViewTopConstraint;
@property(nonatomic) __weak UIViewController *viewControllerToUseForPrefersStatusBarHidden; // @synthesize viewControllerToUseForPrefersStatusBarHidden=_viewControllerToUseForPrefersStatusBarHidden;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)toggleBIU:(id)arg1;
- (void)updateUIFromPopoverState;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

