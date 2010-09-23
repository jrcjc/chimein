require 'test_helper'

class ImsControllerTest < ActionController::TestCase
  test "should get index" do
    get :index
    assert_response :success
    assert_not_nil assigns(:ims)
  end

  test "should get new" do
    get :new
    assert_response :success
  end

  test "should create im" do
    assert_difference('Im.count') do
      post :create, :im => { }
    end

    assert_redirected_to im_path(assigns(:im))
  end

  test "should show im" do
    get :show, :id => ims(:one).to_param
    assert_response :success
  end

  test "should get edit" do
    get :edit, :id => ims(:one).to_param
    assert_response :success
  end

  test "should update im" do
    put :update, :id => ims(:one).to_param, :im => { }
    assert_redirected_to im_path(assigns(:im))
  end

  test "should destroy im" do
    assert_difference('Im.count', -1) do
      delete :destroy, :id => ims(:one).to_param
    end

    assert_redirected_to ims_path
  end
end
